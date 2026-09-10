// Address: 00481378
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00481378(void)

{
  int iVar1;
  undefined4 in_stack_00000004;
  int in_stack_00000010;
  
  iVar1 = FUN_00403a54(PTR_DAT_0047dde4,1);
  *(undefined4 *)(iVar1 + 4) = in_stack_00000004;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(in_stack_00000010 + 8);
  FUN_0041dec0(in_stack_00000010,iVar1);
  return 1;
}

