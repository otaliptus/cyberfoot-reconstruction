// Address: 0050b6a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050b6a4(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;
  
  puStack_1c = (undefined1 *)0x50b6ba;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_20 = &LAB_0050b71b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar5 = *(int *)(param_1[0xe] + 8);
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar3 = (**(code **)(*param_1 + 0x30))(param_1,iVar4);
      cVar2 = FUN_004096cc(*(undefined4 *)(iVar3 + 8),local_8);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x30))(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0050b722;
  puStack_20 = (undefined1 *)0x50b71a;
  FUN_004048d4(&local_8,uStack_24,puVar1);
  return;
}

