// Address: 00402a44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

byte * FUN_00402a44(byte *param_1,int *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  while( true ) {
    for (; (*param_1 != 0 && (*param_1 < 0x21)); param_1 = (byte *)CharNextA((LPCSTR)param_1)) {
    }
    if ((*param_1 != 0x22) || (param_1[1] != 0x22)) break;
    param_1 = param_1 + 2;
  }
  pbVar4 = (byte *)0x0;
  pbVar3 = param_1;
  while (0x20 < *pbVar3) {
    if (*pbVar3 == 0x22) {
      pbVar3 = (byte *)CharNextA((LPCSTR)pbVar3);
      while ((*pbVar3 != 0 && (*pbVar3 != 0x22))) {
        pbVar2 = (byte *)CharNextA((LPCSTR)pbVar3);
        pbVar4 = pbVar2 + ((int)pbVar4 - (int)pbVar3);
        pbVar3 = pbVar2;
      }
      if (*pbVar3 != 0) {
        pbVar3 = (byte *)CharNextA((LPCSTR)pbVar3);
      }
    }
    else {
      pbVar2 = (byte *)CharNextA((LPCSTR)pbVar3);
      pbVar4 = pbVar2 + ((int)pbVar4 - (int)pbVar3);
      pbVar3 = pbVar2;
    }
  }
  FUN_00404f30(param_2,pbVar4);
  iVar1 = *param_2;
  iVar5 = 0;
  while (0x20 < *param_1) {
    if (*param_1 == 0x22) {
      param_1 = (byte *)CharNextA((LPCSTR)param_1);
      while ((*param_1 != 0 && (*param_1 != 0x22))) {
        pbVar3 = (byte *)CharNextA((LPCSTR)param_1);
        for (; param_1 < pbVar3; param_1 = param_1 + 1) {
          *(byte *)(iVar1 + iVar5) = *param_1;
          iVar5 = iVar5 + 1;
        }
      }
      if (*param_1 != 0) {
        param_1 = (byte *)CharNextA((LPCSTR)param_1);
      }
    }
    else {
      pbVar3 = (byte *)CharNextA((LPCSTR)param_1);
      for (; param_1 < pbVar3; param_1 = param_1 + 1) {
        *(byte *)(iVar1 + iVar5) = *param_1;
        iVar5 = iVar5 + 1;
      }
    }
  }
  return param_1;
}

