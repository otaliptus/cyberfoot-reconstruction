// Address: 0057cd40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0057cd40(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 == 1) {
    iVar1 = param_3 + param_4;
    if (iVar1 < 10000) {
      iVar2 = param_3 * 0x37;
    }
    else if (iVar1 < 15000) {
      iVar2 = param_3 * 0x50;
    }
    else if (iVar1 < 20000) {
      iVar2 = param_3 * 0x78;
    }
    else if (iVar1 < 30000) {
      iVar2 = param_3 * 0xfa;
    }
  }
  if (param_2 == 2) {
    iVar2 = param_3 + param_4;
    if (iVar2 < 10000) {
      iVar2 = param_3 * 0x55;
    }
    else if (iVar2 < 20000) {
      iVar2 = param_3 * 0x5a;
    }
    else if (iVar2 < 40000) {
      iVar2 = param_3 * 0x78;
    }
    else if (iVar2 < 60000) {
      iVar2 = param_3 * 200;
    }
    else if (iVar2 < 80000) {
      iVar2 = param_3 * 300;
    }
    else {
      iVar2 = param_3 * 400;
    }
  }
  if (param_2 == 3) {
    iVar1 = param_3 + param_4;
    if (iVar1 < 10000) {
      iVar2 = param_3 * 0xfa;
    }
    else if (iVar1 < 15000) {
      iVar2 = param_3 * 300;
    }
    else if (iVar1 < 20000) {
      iVar2 = param_3 * 0x15e;
    }
    else if (iVar1 < 30000) {
      iVar2 = param_3 * 400;
    }
  }
  if (param_2 == 4) {
    param_4 = param_3 + param_4;
    if (param_4 < 100) {
      iVar2 = param_3 * 1000;
    }
    else if (param_4 < 200) {
      iVar2 = param_3 * 0x5dc;
    }
    else if (param_4 < 400) {
      iVar2 = param_3 * 2000;
    }
    else {
      iVar2 = param_3 * 3000;
    }
  }
  iVar1 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  if (iVar1 == 1) {
    iVar2 = iVar2 << 2;
  }
  else if (iVar1 == 2) {
    iVar2 = iVar2 * 3;
  }
  else if (iVar1 == 3) {
    iVar2 = FUN_00402c38();
  }
  return iVar2;
}

