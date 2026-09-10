// Address: 004eb524
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eb524(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined1 local_1c [16];
  undefined1 local_c [8];
  
  puStack_30 = &stack0xfffffffc;
  local_20 = 0;
  puStack_34 = &LAB_004eb5e5;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_004070b8(param_2,param_3,local_c);
  FUN_00465c50(param_1);
  puVar3 = local_1c;
  iVar2 = FUN_00465c0c(param_1);
  FUN_0040709c(0xe,0x26,iVar2 + -0xe,puVar3);
  cVar1 = FUN_004070c0(local_1c,local_c);
  if (cVar1 != '\0') {
    FUN_004eb184(param_1,(param_2 + -0xe) / 0x12,(param_3 + -0x26) / 0xf);
    FUN_0040d14c(&local_20);
    FUN_00403c80(param_1,local_20);
  }
  puVar3 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004eb5ec;
  puStack_34 = (undefined1 *)0x4eb5e4;
  FUN_004048d4(&local_20,uStack_38,puVar3);
  return;
}

