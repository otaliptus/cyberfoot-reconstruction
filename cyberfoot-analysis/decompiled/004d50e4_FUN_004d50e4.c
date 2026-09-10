// Address: 004d50e4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d50e4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;
  
  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_004d513d;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_0067abfc = _DAT_0067abfc + 1;
  if (_DAT_0067abfc == 0) {
    FUN_004d5060();
    FUN_004d4fa0();
    FUN_004048d4(&PTR_DAT_006696d4);
    FUN_004048d4(&PTR_s_________<_>__________006696d0);
    FUN_004048d4(&PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_006696cc);
    FUN_004048d4(&PTR_s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_006696c8);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}

