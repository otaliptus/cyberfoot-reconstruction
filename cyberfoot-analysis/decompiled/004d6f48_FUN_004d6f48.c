// Address: 004d6f48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte FUN_004d6f48(void)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int in_stack_00000004;
  
  bVar2 = FUN_00419eb8(*(undefined4 *)(in_stack_00000004 + -4),
                       *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 8));
  if ((bVar2 != 0) && (*(int *)(*(int *)(in_stack_00000004 + -0xc) + 0x20) != 0)) {
    iVar4 = FUN_004195b4(*(undefined4 *)(*(int *)(in_stack_00000004 + -0xc) + 0x20),
                         *(undefined4 *)(in_stack_00000004 + 8),DAT_004d702c);
    if (iVar4 != 0) {
      iVar4 = FUN_00419ee8(*(undefined4 *)(in_stack_00000004 + -4),
                           *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 8));
      uVar1 = *(undefined4 *)(*(int *)(in_stack_00000004 + -0xc) + 0x20);
      uVar5 = FUN_004195b4(uVar1,*(undefined4 *)(in_stack_00000004 + 8),DAT_004d7030);
      iVar6 = FUN_00419ee8(uVar1,uVar5);
      bVar2 = iVar4 != iVar6;
    }
  }
  if (bVar2 != 0) {
    cVar3 = FUN_00403c10(*(undefined4 *)(in_stack_00000004 + -0xc),PTR_PTR_0041c470);
    if (cVar3 != '\0') {
      *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0xc) =
           *(undefined4 *)(in_stack_00000004 + -0xc);
      bVar2 = FUN_004d6c7c(*(undefined4 *)(in_stack_00000004 + -4),
                           *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 8));
      bVar2 = bVar2 ^ 1;
    }
  }
  return bVar2;
}

