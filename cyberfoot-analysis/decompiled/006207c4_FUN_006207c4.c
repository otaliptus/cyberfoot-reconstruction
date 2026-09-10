// Address: 006207c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_006207c4(undefined4 param_1,int param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(PTR_DAT_0066ad60 + param_2 * 0x30 + -0x18) =
         *(undefined4 *)(PTR_DAT_0066ad60 + param_2 * 0x30 + -0x30);
    if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 6) {
      *(undefined1 *)
       (*(int *)PTR_DAT_0066af70 + 0x215 +
       *(int *)(PTR_DAT_0066ad60 + param_2 * 0x30 + -0x2c) * 0x2f8) = 0;
      return;
    }
  }
  else {
    *(undefined4 *)(PTR_DAT_0066ad60 + param_2 * 0x30 + -0x18) =
         *(undefined4 *)(PTR_DAT_0066ad60 + param_2 * 0x30 + -0x2c);
    if (*(int *)(PTR_DAT_0066ac78 + 0x62c) < 6) {
      *(undefined1 *)
       (*(int *)PTR_DAT_0066af70 + 0x215 +
       *(int *)(PTR_DAT_0066ad60 + param_2 * 0x30 + -0x30) * 0x2f8) = 0;
    }
  }
  return;
}

