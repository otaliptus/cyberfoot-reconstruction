// Address: 00487108
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_00487108(int param_1,LPMSG param_2)

{
  int iVar1;
  BOOL BVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = *(int *)(param_1 + 0x44);
  if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x22f) == '\x02')) &&
      (*(int *)(DAT_0066cbf8 + 0x6c) != 0)) &&
     (*(char *)(*(int *)(DAT_0066cbf8 + 0x6c) + 0x22f) == '\x01')) {
    BVar2 = TranslateMDISysAccel(*(HWND *)(iVar1 + 0x254),param_2);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}

