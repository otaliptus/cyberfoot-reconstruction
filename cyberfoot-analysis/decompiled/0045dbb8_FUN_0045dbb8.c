// Address: 0045dbb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045dbb8(int param_1,int param_2,int *param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  int local_10;
  int iStack_c;
  int iStack_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = *param_3;
  local_10 = param_3[1];
  iStack_c = param_3[2];
  iStack_8 = param_3[3];
  puStack_2c = &LAB_0045dc61;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_00464dfc(*(undefined4 *)(param_1 + 0x208));
  if (*(short *)(param_1 + 0x282) == 0) {
    FUN_0042af8c(*(undefined4 *)(param_1 + 0x208),&local_14);
    if (-1 < param_2) {
      (**(code **)(**(int **)(param_1 + 0x23c) + 0xc))(*(int **)(param_1 + 0x23c),param_2,&local_18)
      ;
      FUN_0042b274(*(undefined4 *)(param_1 + 0x208),local_14 + 2,local_10,local_18);
    }
  }
  else {
    (**(code **)(param_1 + 0x280))
              (*(undefined4 *)(param_1 + 0x284),param_1,param_2,
               CONCAT22((short)((uint)&local_14 >> 0x10),param_4),&local_14);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0045dc68;
  puStack_2c = (undefined1 *)0x45dc60;
  FUN_004048d4(&local_18,uStack_30,puVar1);
  return;
}

