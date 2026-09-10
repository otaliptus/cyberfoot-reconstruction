// Address: 00474278
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00474278(int param_1)

{
  char cVar1;
  HIMAGELIST himl;
  undefined4 uVar2;
  
  cVar1 = FUN_004739fc(param_1);
  if (cVar1 != '\0') {
    himl = (HIMAGELIST)FUN_00473bd0(param_1);
    ImageList_GetBkColor(himl);
    uVar2 = FUN_00473818();
    return uVar2;
  }
  return *(undefined4 *)(param_1 + 0x44);
}

