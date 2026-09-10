// Address: 0042d114
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042d114(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  puStack_1c = (undefined1 *)0x42d12f;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_20 = &LAB_0042d19b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00409724(local_8,&local_c);
  FUN_0040496c(&local_8,local_c);
  iVar3 = *(int *)(param_1 + 8) + -1;
  uVar4 = iVar3 == 0;
  if (-1 < iVar3) {
    do {
      iVar2 = FUN_0041e01c(param_1,iVar3);
      FUN_00404cf0(*(undefined4 *)(iVar2 + 4),local_8);
      if ((bool)uVar4) break;
      iVar3 = iVar3 + -1;
      uVar4 = iVar3 == -1;
    } while (!(bool)uVar4);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0042d1a2;
  puStack_20 = (undefined1 *)0x42d19a;
  FUN_004048f8(&local_c,2,puVar1);
  return;
}

