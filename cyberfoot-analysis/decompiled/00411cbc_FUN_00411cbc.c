// Address: 00411cbc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00411cbc(VARIANTARG *param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  char cVar2;
  int *local_c;
  
  uVar1 = (param_1->n1).n2.vt;
  local_c = param_3;
  if (uVar1 < 0x14) {
    VariantClear(param_1);
    FUN_00411988();
  }
  else if (uVar1 == 0x100) {
    (param_1->n1).n2.vt = 0;
    FUN_004048d4((undefined1 *)((int)&param_1->n1 + 8));
  }
  else if (uVar1 == 0x101) {
    (*DAT_0066c814)(param_1);
  }
  else if ((uVar1 & 0x2000) == 0) {
    cVar2 = FUN_00418f24(uVar1,&local_c);
    if (cVar2 == '\0') {
      VariantClear(param_1);
      FUN_00411988();
    }
    else {
      (**(code **)(*local_c + 0x24))(local_c,param_1);
    }
  }
  else {
    FUN_00411b40(param_1);
  }
  return;
}

