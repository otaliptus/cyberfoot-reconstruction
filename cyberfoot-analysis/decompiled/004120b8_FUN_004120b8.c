// Address: 004120b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004120b8(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3)

{
  ushort uVar1;
  char cVar2;
  int *local_10;
  
  local_10 = param_3;
  if (((param_1->n1).n2.vt & 0xbfe8) != 0) {
    FUN_00411cbc(param_1);
  }
  uVar1 = (param_2->n1).n2.vt;
  if (uVar1 < 0x14) {
    VariantCopy(param_1,param_2);
    FUN_00411988();
  }
  else if (uVar1 == 0x100) {
    (param_1->n1).n2.vt = 0x100;
    *(undefined4 *)((int)&param_1->n1 + 8) = 0;
    FUN_00404928((undefined1 *)((int)&param_1->n1 + 8),*(undefined4 *)((int)&param_2->n1 + 8));
  }
  else if (uVar1 == 0x101) {
    (param_1->n1).n2.vt = 0x101;
    *(undefined4 *)((int)&param_1->n1 + 8) = *(undefined4 *)((int)&param_2->n1 + 8);
    (*DAT_0066c81c)(param_1);
  }
  else if ((uVar1 & 0x2000) == 0) {
    cVar2 = FUN_00418f24(uVar1,&local_10);
    if (cVar2 == '\0') {
      VariantCopy(param_1,param_2);
      FUN_00411988();
    }
    else {
      (**(code **)(*local_10 + 0x28))(local_10,param_1,param_2,0);
    }
  }
  else {
    FUN_00411ee4(param_1,param_2,&LAB_004120b0);
  }
  return;
}

