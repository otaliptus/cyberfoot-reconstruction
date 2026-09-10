// Address: 0046e578
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

bool FUN_0046e578(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  HIMAGELIST himlTrack;
  
  cVar1 = FUN_004739fc(param_1);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x78) = param_2;
    *(int *)(param_1 + 0x70) = param_3;
    *(int *)(param_1 + 0x74) = param_4;
    himlTrack = (HIMAGELIST)FUN_00473bd0(param_1);
    ImageList_BeginDrag(himlTrack,param_2,param_3,param_4);
    *(undefined1 *)(param_1 + 0x6a) = 1;
  }
  return cVar1 != '\0';
}

