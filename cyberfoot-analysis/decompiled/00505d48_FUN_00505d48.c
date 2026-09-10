// Address: 00505d48
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00505d48(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000004;
  undefined1 local_14 [4];
  int local_10;
  
  uVar1 = FUN_00504280(*(undefined4 *)(in_stack_00000004 + -4),
                       *(undefined4 *)(in_stack_00000004 + -8),
                       *(undefined4 *)(in_stack_00000004 + 8));
  *(undefined4 *)(in_stack_00000004 + -0x28) = uVar1;
  if ((*(int *)(in_stack_00000004 + -0x28) < 0) ||
     ((*(byte *)(*(int *)(in_stack_00000004 + -4) + 0x491) & 8) == 0)) {
    FUN_0050f004(*(undefined4 *)(in_stack_00000004 + -4),local_14);
    if ((local_10 < *(int *)(in_stack_00000004 + 8)) &&
       (iVar2 = FUN_0050467c(*(undefined4 *)(in_stack_00000004 + -4)),
       *(int *)(in_stack_00000004 + 8) < iVar2)) {
      FUN_00466414(*(undefined4 *)(in_stack_00000004 + -4),0xbbe);
      return;
    }
    FUN_00466414(*(undefined4 *)(in_stack_00000004 + -4),0);
  }
  else {
    FUN_00466414(*(undefined4 *)(in_stack_00000004 + -4),0xbbb);
  }
  return;
}

