// Address: 0050836c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050836c(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar5 = &stack0xfffffffc;
  puStack_18 = (undefined1 *)0x508384;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00405608(&local_10);
  puStack_1c = &LAB_0050841f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(*local_8 + 0x11c))();
  if (iVar2 != 0) {
    if (param_4 == '\0') {
      iVar2 = (**(code **)(*local_8 + 0x11c))();
      iVar3 = (**(code **)(*local_8 + 0x138))();
      cVar1 = FUN_0050827c(iVar3 + 1,iVar2 + -1);
      if (cVar1 == '\0') {
        uVar4 = (**(code **)(*local_8 + 0x138))(local_8,*local_8,puVar5,&stack0xfffffffc);
        FUN_0050827c(0,uVar4);
      }
    }
    else {
      iVar2 = (**(code **)(*local_8 + 0x11c))();
      FUN_0050827c(0,iVar2 + -1);
    }
  }
  puVar5 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00508426;
  puStack_1c = (undefined1 *)0x50841e;
  FUN_00404ff0(&local_10,uStack_20,puVar5);
  return;
}

