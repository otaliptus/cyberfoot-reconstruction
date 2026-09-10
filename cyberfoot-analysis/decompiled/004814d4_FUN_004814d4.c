// Address: 004814d4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004814d4(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 != *(char *)(param_1 + 0x22f)) {
    if ((param_2 == '\x01') && (*(char *)(param_1 + 0x230) == '\0')) {
      FUN_00481838(param_1,1);
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      FUN_00469f58(param_1);
    }
    cVar1 = *(char *)(param_1 + 0x22f);
    *(char *)(param_1 + 0x22f) = param_2;
    if (((param_2 == '\x02') || (cVar1 == '\x02')) && (*(char *)(param_1 + 0x1a5) == '\0')) {
      uVar2 = FUN_004818b4(param_1);
      FUN_004663a8(param_1,uVar2);
    }
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      FUN_0046a0f4(param_1);
    }
    if (param_2 == '\x01') {
      FUN_00480858(param_1,1);
    }
  }
  return;
}

