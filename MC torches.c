#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    
    // 动态分配vis数组
    int **vis = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        vis[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            vis[i][j] = 0;
        }
    }

    // 方向数组，用于火把的照亮
    int dx[] = {-1, 1, 1, -1};
    int dy[] = {-1, -1, 1, 1};
    
    // 处理火把
    for (int _ = 0; _ < m; _++) {
        int x, y;
        scanf("%d %d", &x, &y);
        x--; y--; // 将1-based索引转换为0-based索引
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                vis[nx][ny] = 1;
            }
        }
        for (int i = x - 2; i <= x + 2; i++) {
            if (i >= 0 && i < n) {
                vis[i][y] = 1;
            }
        }
        for (int j = y - 2; j <= y + 2; j++) {
            if (j >= 0 && j < n) {
                vis[x][j] = 1;
            }
        }
        vis[x][y] = 1; // 确保中心位置被标记
    }

    // 处理萤石
    for (int _ = 0; _ < k; _++) {
        int x, y;
        scanf("%d %d", &x, &y);
        x--; y--; // 将1-based索引转换为0-based索引
        for (int i = x - 2; i <= x + 2; i++) {
            for (int j = y - 2; j <= y + 2; j++) {
                if (i >= 0 && i < n && j >= 0 && j < n) {
                    vis[i][j] = 1;
                }
            }
        }
    }

    // 计算未被照亮的格子数
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vis[i][j] == 0) {
                ans++;
            }
        }
    }

    printf("%d\n", ans);

    // 释放分配的内存
    for (int i = 0; i < n; i++) {
        free(vis[i]);
    }
    free(vis);

    return 0;
}