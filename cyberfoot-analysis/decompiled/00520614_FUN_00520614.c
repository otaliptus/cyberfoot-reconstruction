// Address: 00520614
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00520614(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0052066e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  cVar2 = FUN_005205a8(param_1,param_2);
  cVar3 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != cVar3) {
    FUN_00406d44(&PTR_DAT_005166bc,&local_8);
    FUN_00516934(local_8);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00520675;
  puStack_18 = (undefined1 *)0x52066d;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

