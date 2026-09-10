// Address: 004a7e68
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004a7e68(int param_1,byte param_2,byte *param_3,undefined1 *param_4,byte *param_5,
                 int param_6)

{
  int iVar1;
  undefined1 *puVar2;
  int local_c;
  
  local_c = (&DAT_00669384)[param_2];
  puVar2 = (undefined1 *)(local_c * 3 + param_6);
  param_5 = (byte *)((int)param_5 + local_c);
  do {
    *param_5 = param_3[6];
    *puVar2 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[4]);
    puVar2[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[2]);
    puVar2[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)*param_3);
    *param_4 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[5]);
    param_4[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[3]);
    param_4[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x13d + (uint)param_3[1]);
    param_4 = param_4 + 3;
    param_3 = param_3 + 8;
    iVar1 = (&DAT_006693bc)[param_2];
    puVar2 = puVar2 + iVar1 * 3;
    param_5 = param_5 + iVar1;
    local_c = local_c + iVar1;
  } while (local_c < *(int *)(param_1 + 0x18));
  return;
}

