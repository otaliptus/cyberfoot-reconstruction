// Address: 004125bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004125bc(undefined4 param_1,ushort *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*param_2 & 0xfff) < 0x14) {
    if (((ushort)param_3 & 0xfff) < 0x14) {
      uVar5 = 0;
      uVar1 = 0x400;
      puVar4 = param_2;
      uVar3 = param_3;
      uVar2 = (**(code **)PTR_DAT_0066b54c)();
      FUN_00411994(uVar2,CONCAT22(extraout_var_00,*param_2),param_3,param_1,puVar4,uVar1,uVar5,uVar3
                  );
    }
    else {
      FUN_00411500(*param_2,param_3);
    }
  }
  else {
    FUN_004126a8(param_1,param_2,8);
    uVar6 = 0;
    uVar5 = 0x400;
    uVar3 = param_1;
    uVar2 = param_3;
    uVar1 = (**(code **)PTR_DAT_0066b54c)();
    FUN_00411994(uVar1,CONCAT22(extraout_var,*param_2),param_3,param_1,uVar3,uVar5,uVar6,uVar2);
  }
  return;
}

