// Address: 004a7ae4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a7ae4(int param_1,byte param_2,byte *param_3,undefined1 *param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 *puVar1;
  int local_c;
  
  local_c = (&DAT_00669384)[param_2];
  puVar1 = (undefined1 *)(local_c * 3 + param_6);
  do {
    *puVar1 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[4]);
    puVar1[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[2]);
    puVar1[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)*param_3);
    *param_4 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[5]);
    param_4[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[3]);
    param_4[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[1]);
    param_4 = param_4 + 3;
    param_3 = param_3 + 6;
    puVar1 = puVar1 + (&DAT_006693bc)[param_2] * 3;
    local_c = local_c + (&DAT_006693bc)[param_2];
  } while (local_c < *(int *)(param_1 + 0x18));
  return;
}

