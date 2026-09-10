// Address: 004d9f90
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d9f90(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_004da00e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar3 = (**(code **)(*param_1 + 0x38))();
  if (cVar3 != '\0') {
    FUN_004051d4(&local_c,param_2);
    uVar2 = local_c;
    uVar4 = FUN_00403c34(param_1[4],PTR_PTR_00472158);
    FUN_004d9778(uVar4,uVar2,&local_8);
    uVar2 = local_8;
    uVar4 = FUN_00403c34(param_1[6],PTR_PTR_004db538);
    FUN_004dc1b8(uVar4,uVar2);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004da015;
  puStack_1c = (undefined1 *)0x4da00d;
  FUN_00405008(&local_c,2,puVar1);
  return;
}

