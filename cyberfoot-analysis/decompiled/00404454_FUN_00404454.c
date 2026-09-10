// Address: 00404454
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00404454(void)

{
  int iVar1;
  int unaff_EBP;
  int *in_FS_OFFSET;
  
  DAT_0066c63c = (int *)(unaff_EBP + -0xc);
  iVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)DAT_0066c63c;
  *DAT_0066c63c = iVar1;
  *(undefined1 **)(unaff_EBP + -8) = &LAB_004043b4;
  *(int *)(unaff_EBP + -4) = unaff_EBP;
  return;
}

