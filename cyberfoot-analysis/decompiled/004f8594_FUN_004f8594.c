// Address: 004f8594
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f8594(int *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004f863e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar4 = FUN_004f5b28(param_1[0x166],*(undefined4 *)(param_2 + 0x48));
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(iVar4 + 0x14);
  cVar1 = *(char *)(*(int *)(param_2 + 0x34) + 0x3c);
  if (cVar1 == '\x01') {
    piVar5 = (int *)(**(code **)(*param_1 + 0x23c))
                              (param_1,*(undefined4 *)(param_2 + 0x40),
                               *(undefined4 *)(param_2 + 0x48));
    uVar3 = (**(code **)(*piVar5 + 8))();
    *(undefined1 *)(param_2 + 4) = uVar3;
  }
  else if (cVar1 == '\a') {
    piVar5 = (int *)(**(code **)(*param_1 + 0x23c))
                              (param_1,*(undefined4 *)(param_2 + 0x40),
                               *(undefined4 *)(param_2 + 0x48));
    uVar6 = (**(code **)(*piVar5 + 0x14))();
    *(undefined4 *)(param_2 + 0x18) = uVar6;
  }
  else if (cVar1 == '\b') {
    (**(code **)(*param_1 + 0x108))
              (param_1,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x48),&local_8);
    FUN_0040502c(param_2 + 0x1c,local_8);
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f8645;
  puStack_18 = (undefined1 *)0x4f863d;
  FUN_00404ff0(&local_8,uStack_1c,puVar2);
  return;
}

