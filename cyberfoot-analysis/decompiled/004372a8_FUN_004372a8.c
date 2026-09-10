// Address: 004372a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004372a8(undefined4 param_1,LPSIZE param_2)

{
  int iVar1;
  HDC hdc;
  char *pcVar2;
  LPSIZE lpsz;
  char local_3c [26];
  char local_22 [26];
  
  pcVar2 = local_3c;
  iVar1 = 0;
  do {
    *pcVar2 = (char)iVar1 + 'A';
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar1 != 0x1a);
  iVar1 = 0;
  pcVar2 = local_22;
  do {
    *pcVar2 = (char)iVar1 + 'a';
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar1 != 0x1a);
  iVar1 = 0x34;
  pcVar2 = local_3c;
  lpsz = param_2;
  hdc = (HDC)FUN_0042b5a8(param_1);
  GetTextExtentPointA(hdc,pcVar2,iVar1,lpsz);
  param_2->cx = param_2->cx / 0x34;
  return;
}

