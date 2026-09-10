// Address: 004567a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004567a4(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  iVar1 = FUN_004567e8(PTR_DAT_00455648,1,*(undefined4 *)(in_stack_00000004 + 0xc));
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = iVar1 + 0x14;
  }
  FUN_00406898(in_stack_00000008,iVar2);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(in_stack_00000004 + 0x10);
  return 0;
}

