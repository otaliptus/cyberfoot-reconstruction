// Address: 0040bf70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040bf70(undefined4 param_1,float *param_2)

{
  char cVar1;
  undefined4 uVar2;
  float10 fStack_14;
  
  uVar2 = FUN_00404da4(param_1);
  cVar1 = FUN_0040bcac(uVar2,&fStack_14,0);
  if (cVar1 != '\0') {
    *param_2 = (float)fStack_14;
  }
  return;
}

