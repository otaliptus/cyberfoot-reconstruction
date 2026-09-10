// Address: 0040beb0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040beb0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  undefined1 uStack_8;
  
  uVar2 = FUN_00404da4(param_1);
  cVar1 = FUN_0040bcac(uVar2,auStack_18,0);
  if (cVar1 == '\0') {
    uStack_8 = 0xb;
    uStack_c = param_1;
    FUN_00409434(PTR_PTR_0066ae60,&uStack_c,0);
  }
  return;
}

