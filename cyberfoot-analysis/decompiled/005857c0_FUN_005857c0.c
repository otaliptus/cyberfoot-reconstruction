// Address: 005857c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005857c0(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  LPCSTR lpString2;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  piVar6 = (int *)(in_stack_00000004 + -0x40);
  puStack_18 = &LAB_005858fe;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar3 = FUN_00430280(*(undefined4 *)(*piVar6 + 0x1fc));
  FUN_0042b4a4(uVar3,*(undefined4 *)(*piVar6 + 0x68));
  iVar4 = FUN_00430280(*(undefined4 *)(*piVar6 + 0x1fc));
  FUN_0042a5b0(*(undefined4 *)(iVar4 + 0xc),&local_8);
  lpString2 = (LPCSTR)FUN_00404da4(local_8);
  lstrcpyA((LPSTR)(in_stack_00000004 + -0x20),lpString2);
  iVar4 = FUN_00430280(*(undefined4 *)(*piVar6 + 0x1fc));
  uVar3 = FUN_0042a580(*(undefined4 *)(iVar4 + 0xc));
  *(undefined4 *)(in_stack_00000004 + -0x3c) = uVar3;
  *(undefined4 *)(in_stack_00000004 + -0x38) = 0;
  iVar4 = FUN_00430280(*(undefined4 *)(*piVar6 + 0x1fc));
  uVar2 = FUN_0042a6c8(*(undefined4 *)(iVar4 + 0xc));
  *(undefined1 *)(in_stack_00000004 + -0x25) = uVar2;
  iVar4 = FUN_00430280(*(undefined4 *)(*piVar6 + 0x1fc));
  uVar5 = FUN_0042a660(*(undefined4 *)(iVar4 + 0xc));
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)(in_stack_00000004 + -0x2c) = 400;
  }
  else {
    *(undefined4 *)(in_stack_00000004 + -0x2c) = 700;
  }
  iVar4 = FUN_00430280(*(undefined4 *)(*piVar6 + 0x1fc));
  uVar5 = FUN_0042a660(*(undefined4 *)(iVar4 + 0xc));
  if ((uVar5 & 2) == 0) {
    *(undefined1 *)(in_stack_00000004 + -0x28) = 0;
  }
  else {
    *(undefined1 *)(in_stack_00000004 + -0x28) = 1;
  }
  iVar4 = FUN_00430280(*(undefined4 *)(*piVar6 + 0x1fc));
  uVar5 = FUN_0042a660(*(undefined4 *)(iVar4 + 0xc));
  if ((uVar5 & 4) == 0) {
    *(undefined1 *)(in_stack_00000004 + -0x27) = 0;
  }
  else {
    *(undefined1 *)(in_stack_00000004 + -0x27) = 1;
  }
  iVar4 = FUN_00430280(*(undefined4 *)(*piVar6 + 0x1fc));
  uVar5 = FUN_0042a660(*(undefined4 *)(iVar4 + 0xc));
  puVar1 = puStack_14;
  if ((uVar5 & 8) == 0) {
    *(undefined1 *)(in_stack_00000004 + -0x26) = 0;
  }
  else {
    *(undefined1 *)(in_stack_00000004 + -0x26) = 1;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00585905;
  puStack_18 = (undefined1 *)0x5858fd;
  FUN_004048d4(&local_8,uStack_1c,puVar1);
  return;
}

