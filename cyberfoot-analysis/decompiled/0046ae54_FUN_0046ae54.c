// Address: 0046ae54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046ae54(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HBRUSH hbr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  RECT local_1c;
  
  uVar2 = FUN_00456c14();
  cVar1 = FUN_00456cf4(uVar2);
  if (((cVar1 == '\0') || (param_1[0xc] == 0)) || ((*(byte *)((int)param_1 + 0x52) & 4) == 0)) {
    if (((char)param_1[0x7e] == '\0') || (*(int *)(param_2 + 4) == *(int *)(param_2 + 8))) {
      hbr = (HBRUSH)FUN_0042aba0(param_1[0x5c]);
      (**(code **)(*param_1 + 0x44))(param_1,&local_1c);
      FillRect(*(HDC *)(param_2 + 4),&local_1c,hbr);
    }
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = FUN_0046cae0(param_1);
    FUN_00456e8c(uVar2,uVar3,*(undefined4 *)(param_2 + 4),uVar4,uVar5,uVar6);
  }
  *(undefined4 *)(param_2 + 0xc) = 1;
  return;
}

