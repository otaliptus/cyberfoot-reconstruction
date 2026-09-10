// Address: 0046bf5c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046bf5c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar3;
  undefined4 uVar4;
  
  FUN_00467de0(param_1);
  cVar1 = FUN_0046cde4(param_1);
  uVar3 = extraout_var;
  if (cVar1 != '\0') {
    uVar4 = 0;
    uVar2 = FUN_0042a3b4(*(undefined4 *)(param_1 + 0x68));
    FUN_004673cc(param_1,0x30,uVar2,uVar4);
    uVar3 = extraout_var_00;
  }
  FUN_00469790(param_1,CONCAT22(uVar3,0xb008));
  return;
}

