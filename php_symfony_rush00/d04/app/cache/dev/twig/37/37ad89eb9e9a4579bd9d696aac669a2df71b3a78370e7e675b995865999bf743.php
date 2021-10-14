<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* GameBundle::Battle.html.twig */
class __TwigTemplate_85fcdbb4294aded422423d343181ed3fb784c778fd89591f5fdd3b5cc8b5f668 extends \Twig\Template
{
    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->parent = false;

        $this->blocks = [
        ];
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02 = $this->env->getExtension("Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension");
        $__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02->enter($__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "GameBundle::Battle.html.twig"));

        // line 1
        echo "<!DOCTYPE html>
<html lang=\"en\">
<head>
\t<meta charset=\"UTF-8\">
\t<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">
\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
\t<title>Battle</title>
\t<link rel=\"stylesheet\" type=\"text/css\" href=\"css/battle.css\"/>
</head>
<body>
\t<!--total-->
    <div id=\"page-wrapper\">
        <!--header-->
        <header id=\"main-header\">
            <hgroup>
                <h1>Battle</h1>
                <h2>-Capture your moviemon</h2>
            </hgroup>
        </header>
        <!--content-->
        <div id=\"content\">
            <!---battle-->
            <div id=\"battle-div\" class=\"pull-left\">
                <div id=\"battle-user\" class=\"box\">
                    <p class=\"battle-title\">player</p>
                    <div class=\"set-img\">
                        <img src=\"img/player.png\" alt=\"\">
                    </div>
                    <p class=\"battle-info\">HP : ";
        // line 29
        echo twig_escape_filter($this->env, ($context["player_health"] ?? $this->getContext($context, "player_health")), "html", null, true);
        echo "/";
        echo twig_escape_filter($this->env, ($context["max_player"] ?? $this->getContext($context, "max_player")), "html", null, true);
        echo "</p>
                    <p class=\"battle-info\">ATK : ";
        // line 30
        echo twig_escape_filter($this->env, ($context["str"] ?? $this->getContext($context, "str")), "html", null, true);
        echo "</p>
                </div>
                <div id=\"battle-mon\" class=\"box\">
                    <p class=\"battle-title\">";
        // line 33
        echo twig_escape_filter($this->env, ($context["title"] ?? $this->getContext($context, "title")), "html", null, true);
        echo "</p>
                    <div class=\"set-img\">
                        <img src=";
        // line 35
        echo twig_escape_filter($this->env, ($context["post"] ?? $this->getContext($context, "post")), "html", null, true);
        echo " alt=\"\">
                    </div>
                    <p class=\"battle-info\">HP : ";
        // line 37
        echo twig_escape_filter($this->env, ($context["mon_health"] ?? $this->getContext($context, "mon_health")), "html", null, true);
        echo "/";
        echo twig_escape_filter($this->env, ($context["max_mon"] ?? $this->getContext($context, "max_mon")), "html", null, true);
        echo "</p>
                    <p class=\"battle-info\">ATK : ";
        // line 38
        echo twig_escape_filter($this->env, ($context["mon_str"] ?? $this->getContext($context, "mon_str")), "html", null, true);
        echo "</p>
                </div>
            </div>
            <!--button-->
            <div id=\"button-div\" class=\"pull-left\">
                ";
        // line 43
        echo         $this->env->getExtension('Symfony\Bridge\Twig\Extension\FormExtension')->renderer->renderBlock(($context["form"] ?? $this->getContext($context, "form")), 'form_start');
        echo "
                ";
        // line 44
        echo         $this->env->getExtension('Symfony\Bridge\Twig\Extension\FormExtension')->renderer->renderBlock(($context["form"] ?? $this->getContext($context, "form")), 'form_end');
        echo "
            </div>
        </div>
        <!--footer-->
        <footer id=\"main-footer\">
            <p class=\"footer-margin\">php | piscine | rush00 | project | by. slee2, sujo</p>
            <p class=\"footer-margin\">Born to code. 42Seoul...</p>
            <div class=\"git-address\">
                <img class=\"pull-left\" src=\"img/github.png\" alt=\"\">
                <p class=\"pull-left\"><span>slee2</span> : https://github.com/Lee-seungju</p>
            </div>
            <div class=\"git-address\">
                <img class=\"pull-left\" src=\"img/github.png\" alt=\"\">
                <p class=\"pull-left\"><span>sujo</span> : https://github.com/josuhee</p>
            </div>
        </footer>
    </div>
</body>
</html>
";
        
        $__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02->leave($__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02_prof);

    }

    public function getTemplateName()
    {
        return "GameBundle::Battle.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  103 => 44,  99 => 43,  91 => 38,  85 => 37,  80 => 35,  75 => 33,  69 => 30,  63 => 29,  33 => 1,);
    }

    /** @deprecated since 1.27 (to be removed in 2.0). Use getSourceContext() instead */
    public function getSource()
    {
        @trigger_error('The '.__METHOD__.' method is deprecated since version 1.27 and will be removed in 2.0. Use getSourceContext() instead.', E_USER_DEPRECATED);

        return $this->getSourceContext()->getCode();
    }

    public function getSourceContext()
    {
        return new Source("<!DOCTYPE html>
<html lang=\"en\">
<head>
\t<meta charset=\"UTF-8\">
\t<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">
\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
\t<title>Battle</title>
\t<link rel=\"stylesheet\" type=\"text/css\" href=\"css/battle.css\"/>
</head>
<body>
\t<!--total-->
    <div id=\"page-wrapper\">
        <!--header-->
        <header id=\"main-header\">
            <hgroup>
                <h1>Battle</h1>
                <h2>-Capture your moviemon</h2>
            </hgroup>
        </header>
        <!--content-->
        <div id=\"content\">
            <!---battle-->
            <div id=\"battle-div\" class=\"pull-left\">
                <div id=\"battle-user\" class=\"box\">
                    <p class=\"battle-title\">player</p>
                    <div class=\"set-img\">
                        <img src=\"img/player.png\" alt=\"\">
                    </div>
                    <p class=\"battle-info\">HP : {{ player_health }}/{{ max_player }}</p>
                    <p class=\"battle-info\">ATK : {{ str }}</p>
                </div>
                <div id=\"battle-mon\" class=\"box\">
                    <p class=\"battle-title\">{{ title }}</p>
                    <div class=\"set-img\">
                        <img src={{ post }} alt=\"\">
                    </div>
                    <p class=\"battle-info\">HP : {{ mon_health }}/{{ max_mon }}</p>
                    <p class=\"battle-info\">ATK : {{ mon_str }}</p>
                </div>
            </div>
            <!--button-->
            <div id=\"button-div\" class=\"pull-left\">
                {{ form_start(form) }}
                {{ form_end(form) }}
            </div>
        </div>
        <!--footer-->
        <footer id=\"main-footer\">
            <p class=\"footer-margin\">php | piscine | rush00 | project | by. slee2, sujo</p>
            <p class=\"footer-margin\">Born to code. 42Seoul...</p>
            <div class=\"git-address\">
                <img class=\"pull-left\" src=\"img/github.png\" alt=\"\">
                <p class=\"pull-left\"><span>slee2</span> : https://github.com/Lee-seungju</p>
            </div>
            <div class=\"git-address\">
                <img class=\"pull-left\" src=\"img/github.png\" alt=\"\">
                <p class=\"pull-left\"><span>sujo</span> : https://github.com/josuhee</p>
            </div>
        </footer>
    </div>
</body>
</html>
", "GameBundle::Battle.html.twig", "/Users/seungjulee/cadet/42-cursus/php_symfony_rush00/d04/src/GameBundle/Resources/views/Battle.html.twig");
    }
}
