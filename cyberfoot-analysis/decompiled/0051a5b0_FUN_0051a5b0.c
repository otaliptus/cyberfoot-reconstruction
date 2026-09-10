// Address: 0051a5b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051a5b0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0051a63e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((param_2 < 0) || (puVar2 = &stack0xfffffffc, param_1[2] <= param_2)) {
    FUN_00406d44(&PTR_DAT_00516664,&local_8);
    (**(code **)(*param_1 + 0xc))(param_1,1,local_8);
    param_3 = extraout_ECX;
    if (param_1[2] == 0) {
      FUN_00406d44(&PTR_DAT_0051673c,&local_c);
      FUN_00516934(local_c);
      param_3 = extraout_ECX_00;
    }
    param_2 = 0;
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  iVar1 = param_1[1];
  uVar3 = CONCAT22((short)CONCAT31((int3)((uint)param_3 >> 8),
                                   *(undefined1 *)(iVar1 + 2 + param_2 * 3)),
                   *(undefined2 *)(iVar1 + param_2 * 3));
  FUN_0051a0cc(*param_1,iVar1,uVar3,uVar3);
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0051a645;
  puStack_1c = (undefined1 *)0x51a63d;
  FUN_004048f8(&local_c,2,puVar2);
  return;
}

