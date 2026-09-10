// Address: 0046830c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046830c(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004683a8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar2 == '\0') {
    FUN_0041e750(param_1,param_2);
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x50))();
    FUN_0047304c(param_2,uVar3);
    FUN_00473234(param_2,param_1[0x20]);
    FUN_00466208(param_1,&local_8);
    FUN_00472ee4(param_2,local_8);
    FUN_00473354(param_2,*(undefined1 *)((int)param_1 + 0x57));
    (**(code **)(*param_2 + 0x34))();
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004683af;
  puStack_1c = (undefined1 *)0x4683a7;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

