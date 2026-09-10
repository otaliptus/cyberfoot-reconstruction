// Address: 00473f5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_00473f5c(undefined4 param_1)

{
  char cVar1;
  HIMAGELIST himl;
  int iVar2;
  
  cVar1 = FUN_004739fc(param_1);
  if (cVar1 != '\0') {
    himl = (HIMAGELIST)FUN_00473bd0(param_1);
    iVar2 = ImageList_GetImageCount(himl);
    return iVar2;
  }
  return 0;
}

