// Address: 00506204
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00506204(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  undefined1 local_c [8];
  
  FUN_004070b8(*(undefined4 *)(in_stack_00000004 + 0xc),*(undefined4 *)(in_stack_00000004 + 8),
               local_c);
  iVar1 = FUN_00507fa8(*(undefined4 *)(in_stack_00000004 + -4),local_c);
  if (iVar1 != 0) {
    uVar2 = FUN_0050a2cc(iVar1);
    FUN_00403c80(*(undefined4 *)(in_stack_00000004 + -4),uVar2);
  }
  return;
}

