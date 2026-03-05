
/**
 * @input A : Integer
 * @input B : Integer
 *
 * @Output Integer
 */
int min(int a, int b) {
  if (a > b)
    return b;
  else
    return a;
}

int solve(int A, int B) {

  int move = 0;
  move += min(8 - A, 8 - B); // top-right
  move += min(8 - A, B - 1); // top-left
  move += min(A - 1, 8 - B); // bottom-right
  move += min(A - 1, B - 1); // bottom-left
  return move;
}

/*
 For an 8×8 chessboard, from position (A, B):

  Bishop can move in 4 directions

1️⃣ Top-Right → (A+i , B+i)
  Steps = min(8 - A, 8 - B)

2️⃣ Top-Left → (A+i , B-i)
  Steps = min(8 - A, B - 1)

3️⃣ Bottom-Right → (A-i , B+i)
  Steps = min(A - 1, 8 - B)

4️⃣ Bottom-Left → (A-i , B-i)
  Steps = min(A - 1, B - 1)
*/
