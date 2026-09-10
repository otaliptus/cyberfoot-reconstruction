// Address: 00465a0c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00465a0c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_8 = param_1;
  if (param_2 != *(int *)(param_1 + 0xa0)) {
    iVar1 = *(int *)(param_1 + 0xa0);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x178) != 0)) {
      puStack_28 = (undefined1 *)0x465a52;
      FUN_0041e1b8(*(undefined4 *)(iVar1 + 0x178),param_1);
    }
    if (((param_2 != 0) && (param_2 != -1)) && (*(int *)(param_2 + 0x178) != 0)) {
      puStack_28 = (undefined1 *)0x465a72;
      FUN_0041dec0(*(undefined4 *)(param_2 + 0x178),local_8);
    }
  }
  *(ushort *)(local_8 + 0x54) = *(ushort *)(local_8 + 0x54) | 0x400;
  puStack_2c = &LAB_00465b07;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  if (param_2 != -1) {
    puStack_28 = &stack0xfffffffc;
    FUN_00403c80(local_8,param_2,&local_18);
  }
  iVar1 = *(int *)(local_8 + 0xa0);
  if (param_2 != iVar1) {
    if (param_2 == -1) {
      *(undefined4 *)(local_8 + 0xa0) = 0;
    }
    else {
      *(int *)(local_8 + 0xa0) = param_2;
      if (param_2 != 0) {
        FUN_00403c80(param_2,local_8,&local_18);
      }
    }
    if (iVar1 != 0) {
      FUN_00403c80(iVar1,local_8);
    }
  }
  *in_FS_OFFSET = uStack_30;
  *(ushort *)(local_8 + 0x54) = *(ushort *)(local_8 + 0x54) & 0xfbff;
  return;
}

