// Address: 004665d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_004665d4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int in_stack_00000004;
  RECT local_28;
  tagRECT local_15;
  undefined1 local_5;
  
  local_5 = 1;
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x30) + 0x198);
  iVar2 = FUN_0041e078(uVar1,*(undefined4 *)(in_stack_00000004 + -4));
  do {
    do {
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = iVar2 + -1;
      iVar3 = FUN_0041e01c(uVar1,iVar2);
    } while ((*(char *)(iVar3 + 0x57) == '\0') || ((*(byte *)(iVar3 + 0x50) & 0x40) == 0));
    FUN_00465ba8(iVar3,&local_28);
    IntersectRect(&local_15,(RECT *)(in_stack_00000004 + -0x14),&local_28);
    BVar4 = EqualRect(&local_15,(RECT *)(in_stack_00000004 + -0x14));
  } while (BVar4 == 0);
  return local_5;
}

