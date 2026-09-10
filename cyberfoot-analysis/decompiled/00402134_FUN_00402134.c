// Address: 00402134
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00402134(uint param_1)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  
  while ((puVar1 = DAT_0066c618, puVar3 = DAT_0066c610, (int)DAT_0066c610[2] < (int)param_1 &&
         (uVar4 = DAT_0066c618[2], puVar3 = DAT_0066c618, (int)uVar4 < (int)param_1))) {
    DAT_0066c618[2] = param_1;
    puVar3 = puVar1;
    do {
      puVar3 = (uint *)puVar3[1];
    } while ((int)puVar3[2] < (int)param_1);
    DAT_0066c618[2] = uVar4;
    puVar1 = puVar3;
    if ((puVar3 != DAT_0066c618) ||
       (((int)param_1 < 0x1001 &&
        (puVar3 = (uint *)FUN_00402108(param_1), puVar1 = DAT_0066c618, puVar3 != (uint *)0x0))))
    break;
    cVar2 = FUN_004020a8(param_1);
    puVar3 = DAT_0066c620;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    if ((int)param_1 <= DAT_0066c61c) {
      DAT_0066c61c = DAT_0066c61c - param_1;
      if (DAT_0066c61c < 0xc) {
        param_1 = param_1 + DAT_0066c61c;
        DAT_0066c61c = 0;
      }
      DAT_0066c620 = (uint *)((int)DAT_0066c620 + param_1);
      *puVar3 = param_1 | 2;
      _DAT_0066c5b4 = _DAT_0066c5b4 + 1;
      _DAT_0066c5b8 = _DAT_0066c5b8 + (param_1 - 4);
      return puVar3 + 1;
    }
  }
  DAT_0066c618 = puVar1;
  FUN_00401ce0(puVar3);
  uVar4 = puVar3[2];
  if ((int)(uVar4 - param_1) < 0xc) {
    if (puVar3 == DAT_0066c618) {
      DAT_0066c618 = (uint *)puVar3[1];
    }
    *(uint *)((int)puVar3 + uVar4) = *(uint *)((int)puVar3 + uVar4) & 0xfffffffe;
  }
  else {
    FUN_00401f48((int)puVar3 + param_1,uVar4 - param_1);
    uVar4 = param_1;
  }
  *puVar3 = uVar4 | 2;
  _DAT_0066c5b4 = _DAT_0066c5b4 + 1;
  _DAT_0066c5b8 = _DAT_0066c5b8 + (uVar4 - 4);
  return puVar3 + 1;
}

