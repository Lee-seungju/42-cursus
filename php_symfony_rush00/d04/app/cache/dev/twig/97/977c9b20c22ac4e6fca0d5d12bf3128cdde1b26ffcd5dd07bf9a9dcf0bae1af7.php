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

/* GameBundle::capture.html.twig */
class __TwigTemplate_b5b7651580dc5a40bf5e9603614dec93736fbdbc406e5d27dc6fc04d24446d44 extends \Twig\Template
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
        $__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02->enter($__internal_319393461309892924ff6e74d6d6e64287df64b63545b994e100d4ab223aed02_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "GameBundle::capture.html.twig"));

        // line 1
        echo "<!DOCTYPE html>
<html lang=\"en\">
<head>
    <meta charset=\"UTF-8\">
    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
    <title>Moviemon List</title>
    <link rel=\"stylesheet\" type=\"text/css\" href=\"css/capture.css\"/>
    <script src=\"http://ajax.googleapis.com/ajax/libs/jquery/1.10.2/jquery.min.js\"></script>
    <script type=\"text/javascript\" src=\"script/capture.js\"></script>
</head>
<body>
    <!--total-->
    <div id=\"page-wrapper\">
        <!--header-->
        <header id=\"main-header\">
            <hgroup>
                <h1>Capture Moviemon</h1>
                <h2>-Capture your moviemon</h2>
            </hgroup>
        </header>
        <!--content-->
        <div id=\"content\">
            <div class=\"score\"><p>Score ";
        // line 24
        echo twig_escape_filter($this->env, ($context["count"] ?? $this->getContext($context, "count")), "html", null, true);
        echo " / 10</p></div>
            <!--captrued moviemon-->
            ";
        // line 26
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable(range(0, 9));
        foreach ($context['_seq'] as $context["_key"] => $context["i"]) {
            // line 27
            echo "            <div class=\"poster\" onclick=\"ClickPoster('";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["title"] ?? $this->getContext($context, "title")), $context["i"], [], "array"), "html", null, true);
            echo "', '";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["year"] ?? $this->getContext($context, "year")), $context["i"], [], "array"), "html", null, true);
            echo "', '";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["rating"] ?? $this->getContext($context, "rating")), $context["i"], [], "array"), "html", null, true);
            echo "', '";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["director"] ?? $this->getContext($context, "director")), $context["i"], [], "array"), "html", null, true);
            echo "', '";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["plot"] ?? $this->getContext($context, "plot")), $context["i"], [], "array"), "html", null, true);
            echo "', '";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["signal"] ?? $this->getContext($context, "signal")), $context["i"], [], "array"), "html", null, true);
            echo "')\" style=\"background-image: linear-gradient(rgba(0, 0, 0, ";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["capture"] ?? $this->getContext($context, "capture")), $context["i"], [], "array"), "html", null, true);
            echo "), rgba(0, 0, 0, ";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["capture"] ?? $this->getContext($context, "capture")), $context["i"], [], "array"), "html", null, true);
            echo ")), url(";
            echo twig_escape_filter($this->env, $this->getAttribute(($context["post"] ?? $this->getContext($context, "post")), $context["i"], [], "array"), "html", null, true);
            echo ");\">
            </div>
            ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['i'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 30
        echo "            <!--button-->
            <div id=\"button-div\" class=\"pull-left\">
                <div id=\"save-div\">
                    ";
        // line 33
        echo         $this->env->getExtension('Symfony\Bridge\Twig\Extension\FormExtension')->renderer->renderBlock(($context["form"] ?? $this->getContext($context, "form")), 'form_start');
        echo "
                    ";
        // line 34
        echo         $this->env->getExtension('Symfony\Bridge\Twig\Extension\FormExtension')->renderer->renderBlock(($context["form"] ?? $this->getContext($context, "form")), 'form_end');
        echo "
                </div>
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
        return "GameBundle::capture.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  102 => 34,  98 => 33,  93 => 30,  67 => 27,  63 => 26,  58 => 24,  33 => 1,);
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
    <meta charset=\"UTF-8\">
    <meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">
    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
    <title>Moviemon List</title>
    <link rel=\"stylesheet\" type=\"text/css\" href=\"css/capture.css\"/>
    <script src=\"http://ajax.googleapis.com/ajax/libs/jquery/1.10.2/jquery.min.js\"></script>
    <script type=\"text/javascript\" src=\"script/capture.js\"></script>
</head>
<body>
    <!--total-->
    <div id=\"page-wrapper\">
        <!--header-->
        <header id=\"main-header\">
            <hgroup>
                <h1>Capture Moviemon</h1>
                <h2>-Capture your moviemon</h2>
            </hgroup>
        </header>
        <!--content-->
        <div id=\"content\">
            <div class=\"score\"><p>Score {{ count }} / 10</p></div>
            <!--captrued moviemon-->
            {% for i in 0..9 %}
            <div class=\"poster\" onclick=\"ClickPoster('{{ title[i] }}', '{{ year[i] }}', '{{ rating[i] }}', '{{ director[i] }}', '{{ plot[i] }}', '{{ signal[i] }}')\" style=\"background-image: linear-gradient(rgba(0, 0, 0, {{ capture[i] }}), rgba(0, 0, 0, {{ capture[i] }})), url({{ post[i] }});\">
            </div>
            {% endfor %}
            <!--button-->
            <div id=\"button-div\" class=\"pull-left\">
                <div id=\"save-div\">
                    {{ form_start(form) }}
                    {{ form_end(form) }}
                </div>
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
", "GameBundle::capture.html.twig", "/Users/seungjulee/cadet/42-cursus/php_symfony_rush00/d04/src/GameBundle/Resources/views/capture.html.twig");
    }
}
