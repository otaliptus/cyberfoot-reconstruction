// Address: 004d3548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_004d3548(short *param_1,char param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  iVar2 = FUN_00405260(param_1);
  psVar3 = param_1 + iVar2;
  iVar2 = FUN_00405260(param_1);
  do {
    if (psVar3 <= param_1) {
      return iVar2;
    }
    sVar1 = *param_1;
    if (sVar1 == 10) {
LAB_004d3581:
      if (param_2 == '\x01') {
        iVar2 = iVar2 + 1;
      }
    }
    else if (sVar1 == 0xd) {
      if (param_2 == '\x01') {
        if (param_1[1] == 10) {
          param_1 = param_1 + 1;
        }
        else {
          iVar2 = iVar2 + 1;
        }
      }
      else if (param_1[1] == 10) {
        iVar2 = iVar2 + -1;
      }
    }
    else if (sVar1 == 0x2028) goto LAB_004d3581;
    param_1 = param_1 + 1;
  } while( true );
}

