import math

MOD = 998244353

def count_spoke_constellations(n, stars):
    # Compute distances between all pairs of stars
    distances = {}
    for i in range(n):
        for j in range(i+1, n):
            dx = stars[i][0] - stars[j][0]
            dy = stars[i][1] - stars[j][1]
            dist = math.sqrt(dx*dx + dy*dy)
            if dist not in distances:
                distances[dist] = set()
            distances[dist].add((i,j))
    
    # Count spoke constellations for each central star
    count = 0
    for i in range(n):
        # Count stars at each distance
        dist_count = []
        for dist in sorted(distances.keys()):
            count = 0
            for (j,k) in distances[dist]:
                if i == j or i == k:
                    count += 1
            dist_count.append(count)
        
        # Check if this is a valid spoke constellation
        m = len(dist_count) - 1
        k = max(dist_count)
        if k == 0:
            continue
        if k > m:
            continue
        if dist_count[k] != m:
            continue
        if len(set(dist_count[:k+1])) != k+1:
            continue
        
        # Count number of valid groups for this spoke constellation
        ways = 1
        for i in range(k+1):
            ways = ways * math.comb(dist_count[i], i+1) % MOD
        count = (count + ways) % MOD
    
    return count

# Read input
n = int(input())
stars = []
for i in range(n):
    x, y = map(int, input().split())
    stars.append((x,y))

# Count spoke constellations
count = count_spoke_constellations(n, stars)

# Print output
print(count)
