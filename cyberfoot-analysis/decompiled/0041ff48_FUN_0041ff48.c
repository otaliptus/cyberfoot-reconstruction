// Address: 0041ff48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041ff48(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0041ffe4;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_3;
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
  if (local_8 == 0) {
    if (-1 < iVar2) {
      (**(code **)(*param_1 + 0x48))(param_1,iVar2);
    }
  }
  else {
    if (iVar2 < 0) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,0);
    }
    uVar3 = FUN_0042024c(param_1);
    FUN_00404abc(&local_10,uVar3);
    iVar4 = local_8;
    uVar3 = local_10;
    FUN_00404c64(&local_c,3);
    (**(code **)(*param_1 + 0x20))(param_1,iVar2,local_c,iVar4,uVar3,param_2);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041ffeb;
  puStack_24 = (undefined1 *)0x41ffe3;
  FUN_004048f8(&local_10,2,puVar1);
  return;
}

