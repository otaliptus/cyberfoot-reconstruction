// Address: 00482224
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00482224(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004822cc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_2 == *(int *)(param_1 + 0x220)) goto LAB_004822b6;
  puVar1 = &stack0xfffffffc;
  if (param_2 == 0) goto LAB_0048228f;
  puVar1 = &stack0xfffffffc;
  if (param_1 == param_2) {
LAB_0048226e:
    puStack_18 = puVar1;
    FUN_00406d44(PTR_PTR_0066b5e0,&local_8);
    FUN_0040e370(PTR_DAT_0041b6dc,1,local_8);
    FUN_00404250();
    puVar1 = puStack_18;
  }
  else {
    iVar3 = FUN_0047e4c0(param_2);
    puVar1 = puStack_18;
    if (param_1 != iVar3) goto LAB_0048226e;
    if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
      cVar2 = FUN_00403c80(param_2);
      puVar1 = puStack_18;
      if (cVar2 == '\0') goto LAB_0048226e;
    }
  }
LAB_0048228f:
  puStack_18 = puVar1;
  *(int *)(param_1 + 0x220) = param_2;
  puVar1 = puStack_18;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    if (*(char *)(param_1 + 0x22e) != '\0') {
      FUN_004825dc(param_1);
    }
    FUN_00403c80(param_1);
    puVar1 = puStack_18;
  }
LAB_004822b6:
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004822d3;
  puStack_1c = (undefined1 *)0x4822cb;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

