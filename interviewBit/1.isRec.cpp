
/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer
 * @input D : Integer
 *
 * @Output Integer
 */
int solve(int A, int B, int C, int D) {
  if ((A == B && C == D) || (A == C && B == D) || (A == D && B == C))
    return 1;
  else
    return 0;
}
