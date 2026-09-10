// Address: 0041689c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_0041689c(undefined4 param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar3 = 1;
  cVar1 = (char)param_1;
  uVar4 = uVar3;
  if (param_3 == 0xe) {
    if (DAT_00662448 == '\0') {
      FUN_004115f0();
    }
    else {
      uVar4 = DAT_00662490;
      if ((DAT_00662448 != '\x01') && (uVar4 = uVar3, DAT_00662448 == '\x02')) {
        if ((cVar1 == '\x02') && (param_2 == '\x02')) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
        uVar4 = (&DAT_00662490)[iVar2];
      }
    }
  }
  else if (param_3 == 0xf) {
    if (DAT_00662448 == '\0') {
      FUN_004115f0();
    }
    else {
      uVar4 = DAT_00662492;
      if ((DAT_00662448 != '\x01') && (uVar4 = uVar3, DAT_00662448 == '\x02')) {
        if ((cVar1 == '\x02') && (param_2 == '\x02')) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
        }
        uVar4 = (&DAT_00662492)[iVar2];
      }
    }
  }
  else if (param_3 - 0x10U < 4) {
    if (DAT_0066244c == '\0') {
      FUN_004115f0();
    }
    else if (DAT_0066244c == '\x01') {
      uVar4 = (&DAT_00662474)[param_3 * 2];
    }
    else if (DAT_0066244c == '\x02') {
      if (cVar1 == '\x02') {
        if (param_2 == '\x02') {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 2;
      }
    }
  }
  else {
    FUN_0041159c(param_1,param_3 + -0x14);
  }
  return uVar4;
}

