//
//给定一个 m×n (m 行, n 列)的迷宫，迷宫中有两个位置，gloria 想从迷宫的一个位置走到另外一个位置，当然迷宫中有些地方是空地，gloria 可以穿越，有些地方是障碍，她必须绕行，从迷宫的一个位置，只能走到与它相邻的 4 个位置中，当然在行走过程中，gloria 不能走到迷宫外面去。
//令人头痛的是，gloria 是个没什么方向感的人，因此，她在行走过程中，不能转太多弯了，否则她会晕倒的。
//我们假定给定的两个位置都是空地，初始时，gloria 所面向的方向未定，她可以选择 4 个方向的任何一个出发，而不算成一次转弯。
//gloria 能从一个位置走到另外一个位置吗？
//
//输入格式
//第 1 行为一个整数 T，表示测试数据的个数，接下来为 T 组测试数据，每组测试数据中，
//第 1 行为两个整数 m,n，分别表示迷宫的行数和列数，接下来 m 行，每行包括 n 个字符，其中字符 . 表示该位置为空地，字符 * 表示该位置为障碍，输入数据中只有这两种字符，每组测试数据的最后一行为 5 个整数 k,x1,y1,x2,y2，其中 k 表示 gloria 最多能转的弯数，(x1,y1),(x2,y2) 表示两个位置，其中 x1,x2 对应列，y1,y2 对应行。
//
//输出格式
//每组测试数据对应为一行，若 gloria 能从一个位置走到另外一个位置，输出 yes，否则输出 no。
//
//数据范围
//1≤T≤100,
//1≤m,n≤100,
//1≤k≤10,
//1≤x1,x2≤n,
//1≤y1,y2≤m,
//保证给定的两个位置不同，且一定是空地。
//
//输入样例：
//2
//5 5
//...**
//*.**.
//.....
//.....
//*....
//1 1 1 1 3
//5 5
//...**
//*.**.
//.....
//.....
//*....
//2 1 1 1 3
//输出样例：
//no
//yes
#include <iostream>
const int N = 5;
const int M = N * N * 4;
char g[N][N];
int dist[N][N][4];
bool st[N][N][4];
int k;
int sx, sy, tx, ty;

struct Node {
  /* data */
  int x, y, z;
} q[M];
int get(int x) { return (x + M) % M; }
bool bfs() {
  int hh = 0, tt = 0;
  memset(dist, 0x3f, sizeof(dist));
  memset(st, 0, sizeof(st));

  int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
  for (int i = 0; i < 4; i++) {
    q[tt++] = {sx, sy, i};
    dist[sx][sy][i] = 0;
  }
  while (tt != hh) {
    auto t = q[hh];
    hh= get(hh+1);
    if (st[t.x][t.y][t.z]) continue;
    st[t.x][t.y][t.z] = true;

    int distance = dist[t.x][t.y][t.z];
    if (distance > k) continue;
    if (t.x = tx && t.y == ty) return true;
    for (int i = 0; i < 4; i++) {
      int x = t.x + dx[i], y = t.y + dy[i];
      int w = i != t.z;
      if (x >= 0 && x < 5 && y >= 0 && y < 5 && g[x][y] == '.') {
        if (dist[x][y][i] > distance + w) {
          dist[x][y][i] = distance + w;
          if (!w)
            hh = get(hh - 1), q[hh] = {x, y, i};
          else
            q[tt] = {x, y, i}, tt = get(tt + 1);
        }
      }
    }
  }
  return false;
}

int solution() {
  g[0][0] = '.', g[0][1] = '.', g[0][2] = '.', g[0][3] = '*', g[0][4] = '*';
  g[1][0] = '*', g[1][1] = '.', g[1][2] = '*', g[1][3] = '*', g[1][4] = '.';
  g[2][0] = '.', g[2][1] = '.', g[2][2] = '.', g[2][3] = '.', g[2][4] = '.';
  g[3][0] = '.', g[3][1] = '.', g[3][2] = '.', g[3][3] = '.', g[3][4] = '.';
  g[4][0] = '*', g[4][1] = '.', g[4][2] = '.', g[4][3] = '.', g[4][4] = '.';
  sx = 0, sy = 0, tx = 0, ty = 2;
  if (bfs()) std::cout << "yes" << std::endl;
  return 0;
}
