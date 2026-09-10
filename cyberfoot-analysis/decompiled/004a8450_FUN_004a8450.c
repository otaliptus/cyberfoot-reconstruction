// Address: 004a8450
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a8450(int param_1,byte *param_2,undefined1 *param_3,undefined4 param_4,byte *param_5)

{
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x18);
  if (0 < local_8) {
    do {
      *param_5 = param_2[3];
      *param_3 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_2[2]);
      param_3[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_2[1]);
      param_3[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)*param_2);
      param_3 = param_3 + 3;
      param_2 = param_2 + 4;
      param_5 = param_5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

