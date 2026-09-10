// Address: 0062318c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0062318c(undefined4 param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(PTR_DAT_0066af90 + param_2 * 0x30 + -0x18) =
         *(undefined4 *)(PTR_DAT_0066af90 + param_2 * 0x30 + -0x30);
    if (*(int *)(PTR_DAT_0066ac78 + 0x1a8) < 3) {
      *(undefined1 *)
       (*(int *)PTR_DAT_0066af70 + 0x21b +
       *(int *)(PTR_DAT_0066af90 + param_2 * 0x30 + -0x2c) * 0x2f8) = 0;
      return;
    }
  }
  else {
    *(undefined4 *)(PTR_DAT_0066af90 + param_2 * 0x30 + -0x18) =
         *(undefined4 *)(PTR_DAT_0066af90 + param_2 * 0x30 + -0x2c);
    if (*(int *)(PTR_DAT_0066ac78 + 0x1a8) < 3) {
      *(undefined1 *)
       (*(int *)PTR_DAT_0066af70 + 0x21b +
       *(int *)(PTR_DAT_0066af90 + param_2 * 0x30 + -0x30) * 0x2f8) = 0;
    }
  }
  return;
}

