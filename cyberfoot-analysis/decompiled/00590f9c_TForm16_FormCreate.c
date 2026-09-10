// Address: 00590f9c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm16_FormCreate(int param_1)

{
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar1;
  wchar_t *pwStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int iStack_10;
  undefined1 local_c [4];
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  iStack_10 = 4;
  do {
    local_8 = 0;
    iStack_10 = iStack_10 + -1;
  } while (iStack_10 != 0);
  puStack_20 = &LAB_0059113b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  pwStack_28 = L"<p=align=\"center\"><shad>";
  FUN_00642c50(0x2c9,local_c);
  FUN_00405330(&local_8,3);
  FUN_00545088(*(undefined4 *)(param_1 + 0x31c),local_8);
  pwVar1 = L"<p=align=\"center\"><shad>";
  FUN_00642c50(0x2ca,&stack0xffffffec);
  FUN_00405330(&iStack_10,3);
  FUN_00545088(*(undefined4 *)(param_1 + 800),iStack_10);
  FUN_00642c50(0x2cb,&stack0xffffffe8);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x310) + 0x60),unaff_ESI);
  FUN_00642c50(0x2cc,&puStack_1c);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x314) + 0x60),puStack_1c);
  FUN_00642c50(0x2cd,&puStack_20);
  FUN_00509a64(*(undefined4 *)(*(int *)(param_1 + 0x318) + 0x60),puStack_20);
  DAT_006d2248 = 0xffffffff;
  if (*(int *)PTR_DAT_0066b394 < 1) {
    FUN_00545088(*(undefined4 *)(param_1 + 0x328),0);
  }
  else {
    FUN_00405194(&pwStack_28,*(int *)PTR_DAT_0066b5b8 + *(int *)PTR_DAT_0066b394 * 0x130);
    FUN_00405330(&uStack_24,5);
    FUN_00545088(*(undefined4 *)(param_1 + 0x2fc),uStack_24);
    FUN_005917f4(param_1,0xffffffff);
    FUN_0059123c(param_1,*(undefined4 *)PTR_DAT_0066b394);
  }
  *in_FS_OFFSET = L"</shad></p>";
  FUN_00405008(&pwStack_28,9,pwVar1,&LAB_00591142);
  return;
}

