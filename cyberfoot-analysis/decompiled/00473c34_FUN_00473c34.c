// Address: 00473c34
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00473c34(int param_1)

{
  char cVar1;
  HIMAGELIST himl;
  
  cVar1 = FUN_004739fc(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x42) == '\0')) {
    himl = (HIMAGELIST)FUN_00473bd0(param_1);
    ImageList_Destroy(himl);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_00403c80(param_1);
  return;
}

